#include <stdio.h>
#include <stdbool.h>

enum amazonOrderStatus
{
    Payment_failed,Cancelled,Placed,Dispatched,Shipped,Delievered
};

 typedef struct customer{

 	char customerName[20];
 	int contactNo;
 	char address[100];
 	bool isPrime;

 }cust;


 struct order{

 	int orderNo;
 	// char customerName[100];
 	struct customer customerDetails;
 	int price;
 	// char address[100];
 	enum amazonOrderStatus orderStatus;
 };

 typedef struct order ord;

void printOrderDetails(struct order o)
{
	printf("Order No: %d \n",o.orderNo);
	printf("Customer Name: %s \n",o.customerDetails.customerName);
	printf("Order Price is: %d \n",o.price);
	// printf("Order Status is: %d\n",o.orderStatus);
    switch(o.orderStatus)
    {
        case Payment_failed : printf("Order Status is: Payment failed\n");
                            break;
        case Cancelled : printf("Order Status is: Cancelled\n ");
                            break;
        case Placed : printf("Order Status is: Placed\n");
                            break;
        case Dispatched : printf("Order Status is: Dispatched\n");
                            break;
        case Shipped : printf("Order Status is: Shipped\n");
                            break;
        case Delievered : printf("Order Status is: Delievered\n");
                            break;
    }

}

void changeOrderStatus(struct order* o,enum amazonOrderStatus newStatus)
{
    // o.orderStatus=newStatus;

    // (*o).orderStatus=newStatus;
   o->orderStatus=newStatus;
}

void printCustomerDetails(cust customersList[100],int n)
{

    // char customer customerDetails;
    // int contactNo;
    // char address[100];
    // bool isPrime;
    for (int i = 0; i < n; ++i)
    {
        printf("Customer Name: %s\n",customersList[i].customerName);
        printf("Contact No: %d\n",customersList[i].contactNo);
        printf("Address: %s\n",customersList[i].address);

        if(customersList[i].isPrime)
        printf("Prime Member: Yes\n");
    }
}

 int main()
 {

    int n=6;
    cust customersList[100]={
        {"Naman",8238148,"Rajpura",false},
        {"Manvi",334893,"Rajpura",false},
        {"Manvi Grover",32423421,"Rajpura",true},
        {"Naman Malhotra",23423423,"Rajpura,Punjab",true},
        

    };
    ord orders[1000]={
        {101,customersList[0],500,Placed},
        {102,customersList[1],1500,Shipped},
        {103,customersList[2],2500,Payment_failed}
    };

 	printOrderDetails(orders[0]);
 	printOrderDetails(orders[1]);

    changeOrderStatus(&orders[2],Placed);
 	printOrderDetails(orders[2]);

    printf("\n");

    printCustomerDetails(customersList,n);


 }