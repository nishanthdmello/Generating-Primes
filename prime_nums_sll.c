#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void main()
{
    int num_primes;
    printf("Enter the number of primes you want to find: ");
    scanf("%d", &num_primes);

    Node *head_node = malloc(sizeof(Node));
    head_node->data = 2;
    head_node->next = NULL;

    Node *current_node = head_node;
    int num_primes_found = 1;

    for (int i = 3; num_primes_found < num_primes; i += 2)
    {
        int is_prime = 1;
        Node *temp_node = head_node;

        while (temp_node != NULL && temp_node->data * temp_node->data <= i)
        {
            if (i % temp_node->data == 0)
            {
                is_prime = 0;
                break;
            }
            temp_node = temp_node->next;
        }

        if (is_prime == 1)
        {
            Node *new_node = malloc(sizeof(Node));
            new_node->data = i;
            new_node->next = NULL;

            current_node->next = new_node;
            current_node = new_node;
            num_primes_found++;
        }
    }

    printf("The prime number at position %d is: %d\n", num_primes, current_node->data);

    Node *temp_node = head_node;
    while (temp_node != NULL)
    {
        Node *next_node = temp_node->next;
        free(temp_node);
        temp_node = next_node;
    }
}
