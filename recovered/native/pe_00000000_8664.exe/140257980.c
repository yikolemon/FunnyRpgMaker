/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257980 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_140257980(longlong *param_1,ushort param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_RSI;
  undefined8 uVar5;
  
  uVar3 = (uint)param_2;
  if (0x7f < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c(" of this for std::string.");
  }
  if (param_2 < 0x50) {
    uVar4 = (uint)param_2;
    if (uVar4 < 0x45) {
      if (uVar4 == 0) {
        uVar5 = 1;
        goto LAB_140257ace;
      }
      if (uVar3 != 0x41) {
        if (uVar3 != 0x42) goto LAB_140257bc7;
        goto LAB_140257a42;
      }
    }
    else if (2 < uVar4 - 0x45) goto LAB_140257bc7;
    uVar5 = 0;
    uVar3 = 2;
  }
  else {
    switch(param_2) {
    case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x62:
    case 100:
    case 0x66:
    case 0x68:
    case 0x6a:
    case 0x6c:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x78:
      out(*unaff_RSI,param_2);
      *(char *)param_1 = (char)*param_1;
      switchD_1402579b9::switchdataD_1404c7d70._0_1_ =
           (char)switchD_1402579b9::switchdataD_1404c7d70 + 'p';
      cVar1 = cRam0000000000000030 + '0';
      bVar2 = cRam0000000000000030 < -0x30;
      cRam0000000000000030 = cVar1;
      if (bVar2) {
        *(char *)param_1 = (char)*param_1;
        cRam0000000000000030 = cRam0000000000000030 + '0';
      }
      *(char *)param_1 = (char)*param_1;
      cRam0000000000000030 = cRam0000000000000030 + '0';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x71:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar3 == 0x50) {
      uVar5 = 0;
      uVar3 = 4;
      goto LAB_140257ace;
    }
    if (uVar3 != 0x58) {
LAB_140257bc7:
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("itmap");
    }
LAB_140257a42:
    uVar5 = 0;
    uVar3 = 1;
  }
LAB_140257ace:
  switch((char)param_1[3]) {
  case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x02':
  case '\x04':
  case '\x06':
  case '\b':
  case '\n':
  case '\f':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\t':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\v':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar3 - 3 < 0xfffffffe) && (*(char *)((longlong)param_1 + 0x19) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("CodeTree",param_2,uVar3 - 3,uVar5);
  }
  if (((*(char *)((longlong)param_1 + 0x1a) == '\x01') && (1 < uVar3 - 1)) && (uVar3 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("ThreeThreeThree",param_2,uVar3 - 1,uVar5);
  }
  *(char *)(*param_1 + 8) = (char)param_2;
  return;
}

