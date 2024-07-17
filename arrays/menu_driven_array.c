// insert, delete, search, sum, display
#include<stdio.h>
#include<stdlib.h>

struct my_array
{
    int a[5];
    // int *a;
    int array_length, array_size;
};

void insert(struct my_array *p){
    printf("\nenter elements\n");
    for(int i=0;i<p->array_length;i++){
        scanf("%d", &(p->a[i]));
    }

}

void insert_location(struct my_array *p, int location){
    int item,length;
    if(location < p->array_length){
        p->array_length +=1;
        length=p->array_length;
        while(location< length){
            p->a[length]=p->a[length - 1 ];
            length-=1;
        }
        printf("\nenter value\n");
        scanf("%d",&item);
        p->a[location]=item;

        
    }
    else{
        printf("\nlocation not found\n");
    }
}

int linear_search(struct my_array x, int value){
    for(int i=0;i<x.array_length;i++){
        if(value==x.a[i]){
            return i;
        }
    }
    return -1;

}

int sum(struct my_array x){
    int sum=0;
    for(int i=0;i<x.array_length;i++){
        sum +=x.a[i];
    }
    return sum;

}


void delete(struct my_array *x, int loc){
    if(loc<x->array_length){
      
      while(loc<x->array_length){
          x->a[loc]=x->a[loc+1];
          loc+=1;
      }
      x->array_length-=1; 
    }
}
void show(struct my_array a){
    printf("\nYour array: ");
    for(int i=0;i<a.array_length;i++)
        printf("%d ", a.a[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int array_size=10, array_length=5,flag=0;
    struct my_array ar={{1,2,3,4,5},5,10};
    // struct my_array ar;
    int choice=0, sum_value=0;

    // printf("\nEnter the size of array\n");
    // scanf("%d", &array_size);
    // ar.a=(int*)malloc(sizeof(int)*array_size);
    // ar.array_size=array_size;
    // printf("\nEnter the length of array\n");
    // scanf("%d", &array_length);
    // ar.array_length=array_length;
    // insert(&ar);



    if(ar.array_length<ar.array_size){
        // 0insert values, 1 for insert at location, 2: search, 3: sum, 4. display, 5: exit
        while(choice<6){
            printf("\n1: insert location\n2: search\n3: sum\n4: delete\n5: display\n6: exit\n");
            scanf("%d",&choice);
            switch (choice)
            {
            

            case 1: 
                printf("\nEnter your insert_location: ");
                int location;
                scanf("%d",&location);
                insert_location(&ar, location );
                break;
            case 2:
                printf("\nEnter the value you want to search: ");
                int search_value;
                scanf("%d",&search_value);
                flag=linear_search(ar,search_value);
                if(flag>=0)
                    printf("\nfound at location %d",flag);
                else
                    printf("\nNot found");

                break;
            case 3:
                sum_value=sum(ar);
                printf("\nSum is: %d\n",sum_value);
                break;
            case 4:
                printf("\nwhich location to delete?\n");
                int delete_loc;
                scanf("%d",&delete_loc);
                delete(&ar,delete_loc);
                break;
            case 5:
                show(ar);
                break;
            case 6:
                show(ar);
                break;

            default:
            printf("\nFinished!");
            break;
           
            }
        } 
    }
    
    // show(ar);

    
    return 0;
}
