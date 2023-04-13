#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>

// prototype output message declarations functions

void display_menu();
void payment_type();
void response_1();
void mpin();
void bundle_type();
void daily();
void weekly();
void monthly();
void special_offers();
void spaka_allnetd();
char *createCodePartten(char *ussdCode, char strBuffer[], char prefix[], char postfix[]);
int isValidCode(char *ussdCode, char *uCode);

// init start
int main()
{
  int USSD = 117, choice = 0, options = 0, inner = 0, num = 0, in = 0, ch = 0, mop = 0, pin = 1234;
  char opt = 'b';
  // value from user input
  int value;
  // store created pattern
  char ussdCode[8];
  char prefix[] = "*#";
  char postFix[] = "#";
  char uTest[] = "*#1778#";

  // stores converted number to character string
  char buffer[10];

  printf("\tenter USSD\n");
  scanf("%d", &value);
  // convert number to character string
  itoa(value, buffer, 10);
  // generate valid  pattern for ussdCode
  char *ussdCodee = createCodePartten(ussdCode, buffer, prefix, postFix);

  if (isValidCode(ussdCode, uTest) == 0)
  {
    display_menu();
    scanf("%d", &choice);
    switch (choice)
    {
    // DATA TREATS AS CASE 1 MAIN MENU OF CHOICE
    case 1:
      printf("1. k2: 300MB for 24hrs + 100MB Gift\n");
      printf("2. k5: 750MB for 7Days + 300MB Gift\n");
      printf("3. k10: 1GB for 7 Days + 500MB Gift\n");
      printf("\t\t0. more\n");
      printf("\t\tb. Back\n");
      printf("\t\t##. Home\n");
      scanf("%d", &in);
      if (in == 1 || 2 || 3)
      {
        payment_type();
        scanf("%d", &mop);
        if (mop == 1)
        {
          response_1();
        }
        else if (mop == 2)
        {
          mpin();
          scanf("%d", &pin);
          if (pin == 1234)
          {
            response_1();
            return 0;
          }
          else
          {
            printf("invalid input");
            return 0;
          }
        }
      }
      break;
    // SPAKA AND 1 ZED AS CASE 2 MAIN MENU OF CHOICE
    case 2:
      printf("Welcome to MTN spaka Bundles\n");
      printf("1.1ZED AllNetworks \n");
      printf("2. Special Offers(New)\n");
      printf("3. SPAKA MTN to MTN\n");
      printf("4. SPAKA ALLNET");
      printf("5. SPAKA For You\n");
      printf("0. More\n");
      scanf("%d", &options);
      switch (options)
      {
      case 1:
        bundle_type();
        scanf("%d", &ch);
        if (ch == 1)
        {
          daily();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 2)
        {
          weekly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 3)
        {
          monthly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 'b')
        {
          bundle_type();
          return 0;
        }

        break;

        // SPECIAL OFFERS OF CASE OPTIONS

      case 2:
        special_offers();
        scanf("%d", &in);
        if (in == 1 || 2)
        {
          payment_type();
          scanf("%d", &mop);
          if (mop == 1)
          {
            response_1();
          }
          else if (mop == 2)
          {
            mpin();
            scanf("%d", &pin);
            if (pin == 1234)
            {
              response_1();
              return 0;
            }
            else
            {
              printf("invalid input");
              return 0;
            }
          }
        }
        break;

      // SPAKA MTN TO MTN OF OPTTIONS CASE
      case 3:
        bundle_type();
        scanf("%d", &ch);
        if (ch == 1)
        {
          daily();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 2)
        {
          weekly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 3)
        {
          monthly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 'b')
        {
          bundle_type();
          return 0;
        }
        break;

      // SPAKA ALL NET OF OPTIONS CASE
      case 4:
        bundle_type();
        scanf("%d", &ch);
        if (ch == 1)
        {
          spaka_allnetd();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 2)
        {
          weekly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 3)
        {
          monthly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 'b')
        {
          bundle_type();
          return 0;
        }
        break;

      // SPAKA FOR YOU OF OPTIONS CASE
      case 5:
        bundle_type();
        scanf("%d", &ch);
        if (ch == 1)
        {
          spaka_allnetd();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 2)
        {
          weekly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 3)
        {
          monthly();
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid input");
                return 0;
              }
            }
          }
        }
        else if (ch == 'b')
        {
          bundle_type();
          return 0;
        }
        break;

      // 0 FOR MORE OF OPTIONS CASE
      case 0:
        break;
      }
      break;
    // END OF CASE OF OPTIONS FIRST USE FOR CASE 2 OF MAIN MENU
    // MAIN MENU CASE OF CHOICE
    // DATA(335)OF MAIN MENU SWITCH
    case 3:
      printf("Welcome to MTN Bundles\n");
      printf("1. Buy Data Bundles\n");
      printf("2. Home And MiFi Bundles\n");
      printf("3. Buy for Others\n");
      printf("4. Streaming Bundles\n");
      printf("5. Share Data Bundle\n");
      scanf("%d", &options);
      switch (options)
      {
      // SWITCH of options 2nd use,CASE 3 OF MAIN MENU
      // BUY DATA BUNDLES CASE
      case 1:
        printf("1. Hourly(Double Double)\n");
        printf("2. daily\n");
        printf("3. weekly\n");
        printf("4. monthly\n");
        printf("5. School Bundles\n");
        printf("6. 60 Days\n");
        printf("7. 90 Days\n");
        printf("8. Freedom(non-expiry)\n");
        printf("b. back\n");
        scanf("%d", &inner);
        switch (inner)
        // new switch called inner inside switch options
        // inner case 1
        {
          // hourly inner switch
        case 1:
          printf("1. 5MB+5MB(10MB)-K0.55\n");
          printf("2. 10MB + 10MB(20MB)-k=K1.10\n");
          printf("\tb. back\n");
          printf("\t##. back\n");
          scanf("%d", &ch);
          if (ch == 1 || 2)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid pin\n");
              }
            }
          }
          else
          {
            printf("invalid input");
          }

          break;
        // daily inner switch
        case 2:
          printf("1. 100MB -K2\n");
          printf("2. 350MB -k5\n");
          printf("3. 1.2GB -K10\n");
          printf("\tb. back\n");
          printf("\t##. home\n");
          scanf("%d", &ch);
          if (ch == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid pin\n");
              }
            }
          }
          else
          {
            printf("invalid input");
          }

          break;
        // weekly inner switch
        case 3:
          printf("1. 800MB -K10\n");
          printf("2. 2GB -K20\n");
          printf("3. 6GB -K50\n");
          printf("\tb. back\n");
          printf("\t##. home\n");
          scanf("%d", &ch);
          if (ch == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid pin\n");
              }
            }
          }
          else
          {
            printf("invalid input");
          }
          break;
        // monthly inner switch
        case 4:
          printf("1. 5GB -K50\n");
          printf("2. 10GB -K100\n");
          printf("3. 25GB -K200\n");
          printf("b. back\n");
          printf("##. home\n");
          scanf("%d", &ch);
          if (ch == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", &pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("invalid pin\n");
              }
            }
          }
          else
          {
            printf("invalid input");
          }
          break;

        // school bundles inner switch
        case 5:
          printf("1. Mulungushi Univeersity\n");
          printf("2. UNZA(University of Zambia)\n");
          printf("3. Texila University\n");
          printf("4.Kwame Nkhruma University\n");
          printf("5. Mukuba University\n");
          break;
          // 60 days inner switch case
        case 6:
          printf("1. 35GB -K700\n");
          printf("2. 50GB -K900\n");
          printf("3. 100GB -K1500\n");
          printf("b. back\n");
          printf("##. home\n");
          break;
        // 90 days inner switch case
        case 7:
          printf("1. 3 months\n");
          printf("2. 6 months\n");
          printf("3. 12 months\n");
          printf("b. back\n");
          printf("##. home\n");
          scanf("%d", &num);

          // if else start 1
          if (num == 1)
          {
            printf("1. 500MB -k45\n");
            printf("2. 1GB -K55\n");
            printf("3. 1.5GB -K75\n");
            printf("4. 5GB -K150\n");
            printf("5. 12GB -K300\n");
            printf("6. 25GB -K600\n");
            printf("7. 35GB -K1050\n");
            printf("8. 50GB -K1350\n");
            printf("9. 100GB -K2550\n");
            printf("\tb. back\n");
            scanf("%d", &ch);
            if (ch == 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9)
            {
              payment_type();
              scanf("%d", &mop);
              if (mop == 1)
              {
                response_1();
                return 0;
              }
              else if (mop == 2)
              {
                mpin();
                scanf("%d", &pin);
                if (pin == 1234)
                {
                  response_1();
                  return 0;
                }
                else
                {
                  printf("invalid pin");
                }
              }
            }
          }

          // if else 2
          else if (num == 2)
          {
            printf("1. 500MB -k45\n");
            printf("2. 1GB -K90\n");
            printf("3. 1.5GB -K120\n");
            printf("4. 5GB -K410\n");
            printf("5. 12GB -K820\n");
            printf("6. 25GB -K1650\n");
            printf("7. 35GB -K2300\n");
            printf("8. 50GB -K3200\n");
            printf("9. 100GB -K6000\n");
            printf("\tb. back\n");
            scanf("%d", &ch);
            if (ch == 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9)
            {
              payment_type();
              scanf("%d", &mop);
              if (mop == 1)
              {
                response_1();
                return 0;
              }
              else if (mop == 2)
              {
                mpin();
                scanf("%d", &pin);
                if (pin == 1234)
                {
                  response_1();
                  return 0;
                }
                else
                {
                  printf("invalid pin");
                }
              }
            }
          }

          // if else 3
          else if (num == 3)

            break;
          // freedom(non-expiry)
        case 8:
          printf("1. 500MB -k45\n");
          printf("2. 1GB -K90\n");
          printf("3. 1.5GB -K120\n");
          printf("4. 5GB -K410\n");
          printf("5. 12GB -K820\n");
          printf("6. 25GB -K1650\n");
          printf("7. 35GB -K2300\n");
          printf("8. 50GB -K3200\n");
          printf("9. 100GB -K6000\n");
          printf("\tb. back\n");
          printf("\t##. home\n");
          break;

        case 'b':
          break;
        }
        break;
        // HOME AND MIFI BUNDLES
      case 2:
        printf("1. MiFi Bundles\n");
        printf("2. Home Uncapped(Blaze)\n");
        printf("3. Home Bundles\n");
        printf("3. Netflix Data Bundles\n");
        printf("b. back\n");
        printf("##. Home\n");

        break;

      // BUY FOR OTHERS
      case 3:
        printf("\tenter recipients number\n");
        scanf("%d", num);
        printf("1. Hourly(Double Double)\n");
        printf("2. daily\n");
        printf("3. weekly\n");
        printf("4. monthly\n");
        printf("5. School Bundles\n");
        printf("6. 60 Days\n");
        printf("7. Travel Bundle\n");
        printf("8. Freedom(non-expiry)\n");
        printf("b. back\n");

        break;

        // STREAMING BUNDLES
      case 4:
        printf("\t1. DSTV Now Bundles\n");
        printf("\t2. Netflix Bundle\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
          printf("1. DSTV K10:DAILY\n");
          printf("1. DSTV K50:WEEKLY\n");
          printf("1. DSTV K110:MONTHLY\n");
          scanf("%d", &in);
          if (in == 1 || 2 || 3)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("inalid pin\n");
              }
            }
            else
            {
              printf("invalid input\n");
            }
          }
        }
        else if (ch == 2)
        {
          printf("1. Netflix Daily K10\n");
          printf("2. Netflix weekly k40\n");
          printf("3. Netflix Weekly K65\n");
          printf("4. Netflix Monthly K160\n");
          scanf("%d", &in);
          if (in == 1 || 2 || 3 || 4)
          {
            payment_type();
            scanf("%d", &mop);
            if (mop == 1)
            {
              response_1();
              return 0;
            }
            else if (mop == 2)
            {
              mpin();
              scanf("%d", pin);
              if (pin == 1234)
              {
                response_1();
                return 0;
              }
              else
              {
                printf("inalid pin\n");
              }
            }
            else
            {
              printf("invalid input\n");
            }
          }
        }

        break;

        // SHARE DATA BUNDLE
      case 5:

        break;
      }
      // END OF 2ND USE OF SWITCH OF OPTIONS FOR CASE 3 MAIN MENU

      break;

    // 777 YANGA OF MAIN MENU SWITCH
    case 4:
      printf("\t\t777 YANGA\n");
      printf("1.VOICE YANGA\n");
      printf("2. DATA YANGA\n");
      printf("3. DATA TREATS\n");
      printf("4. COMBO YANGA(Voice & Dta)\n");
      printf("5. 4G DAT YANGA (4G Offers ONLY\n");
      printf("6. GIFT YANGA\n");
      printf("7. Mwaiseni");
      break;

    // UNIK BUNDLES OF MAIN MENU SWITCH(211)
    case 5:
      printf("\tWelcome to MTN UniK");
      printf("1. Voice and Data Bundles\n");
      printf("2. Data Only bundels\n");
      printf("3. International & Roaming\n");
      printf("b.\t\tBack\n");
      printf("##. Home\n");
      break;
    // PULSE BUNDLES(222 SPAKA LIFE)
    case 6:
      printf("1. Data Bundles\n");
      printf("2. Voice & Data Data Bundeles\n");
      printf("3. Pulse Buddies\n");
      printf("4. Social Media Bundles\n");
      printf("5. School Bundles\n");
      printf("6. Digital\n");
      printf("7. De-activate Pulse plan\n");
      break;
    case 0:

      break;
    default:
      printf("invalid input");
      return 0;
      break;
    }
  }
  else
  {
    printf("invalid service code\n");
    return 0;
  }

  return 0;
}

// prototype output message functions
// Generate ussdCode pattern function
char *createCodePartten(char *ussdCode, char strBuffer[], char prefix[], char postfix[])
{
  strcpy(ussdCode, prefix);
  strcat(ussdCode, strBuffer);
  strcat(ussdCode, postfix);
  printf(" \n ussdCode in func:  %s", ussdCode);

  return ussdCode;
};

// Check ussdCode validation function
int isValidCode(char *ussdCode, char *uCode)
{
  return (strcmp(ussdCode, uCode));
};
void display_menu()
{
  printf("Welcome to MTN bundles\n\n");
  printf("\t1.Data treats\n");
  printf("\t2.Spaka & 1Zed(211)\n");
  printf("\t3.Data(335)\n");
  printf("\t4.777 Yanga\n");
  printf("\t5.UniK Bundles(211)\n");
  printf("\t6.Pulse(222 Spaka life)\n");
  printf("\t0.more\n");
}
void payment_type()
{
  printf("1. main account\n");
  printf("2. mobile money\n");
}
void response_1()
{
  printf("Yello, your bundle has been activated successfully\n");
}
void mpin()
{
  printf("please enter your pin\n");
  printf(".......\n");
}
void bundle_type()
{
  printf("\t1. Daily\n");
  printf("\t2. Weekly\n");
  printf("\t3. Monthly Bundles\n");
  printf("\tb. back\n");
  printf("\t##. Home\n");
}
void daily()
{
  printf("1. k2: 300MB for 24hrs + 100MB Gift\n");
  printf("2. k5: 750MB for 7Days + 300MB Gift\n");
  printf("3. k10: 1GB for 7 Days + 500MB Gift\n");
  printf("\t\t0. more\n");
  printf("\t\tb. Back\n");
  printf("\t\t##. Home\n");
}
void weekly()
{
  printf("1. k50: 300 minutes + 3500MB for 7 Days\n");
  printf("2. k10: 50 min + 50MB + 50 SMS\n");
  printf("3. k15: 100 min + 100MB + 100 SMS\n");
  printf("0. more\n");
}
void monthly()
{
  printf("\t1. K200: 1100minutes ALLNet + 14GB for 30 Days\n");
  printf("\t2. K100: 450 mins+500 SMS+250MB\n");
  printf("\t3. K150: 725 Mins+500 SMS+250MB\n");
  printf("\t0. More\n");
  printf("\tb. back\n");
  printf("\t##. home\n");
}
void special_offers()
{
  printf("1. UNLIMITED CALLS TILL MIDNIGHT AT K10\n");
  printf("2. UNLIMITED MTN CALLS FOR 7 DAYS AT K50\n");
  printf("\tb. back\n");
  printf("\t##. home\n");
}
void spaka_allnetd()
{
  printf("1. k2: 8min 300MB for 24hrs + 100MB Gift\n");
  printf("2. k5: 19mins +75MB + 300SMS \n");
  printf("3. k10: 50mins + 75MB + 500SMS\n");
  printf("\t\t0. more\n");
  printf("\t\tb. Back\n");
  printf("\t\t##. Home\n");
}

// End of Prototypes out function messages