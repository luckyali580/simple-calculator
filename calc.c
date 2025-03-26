case '*’:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0)
 {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            }
 else
 {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
