/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003366a */

char FUN_14003366a(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_b0 [64];
  undefined1 local_70 [32];
  undefined1 local_50 [36];
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 == '\0') {
    uVar2 = FUN_1400339a2(param_1,*(longlong *)(param_2 + 8) + -0x20,1);
    switch(uVar2) {
    case 0:
      goto switchD_1400336f0_caseD_0;
    case 1:
      FUN_1400017de(*(longlong *)(param_2 + 8) + -0x20);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
      *param_3 = '\x01';
      for (plVar3 = *(longlong **)(param_1 + 0x138); plVar3 != *(longlong **)(param_1 + 0x140);
          plVar3 = plVar3 + 1) {
        lVar4 = *plVar3;
        if ((*(longlong *)(lVar4 + 0x98) != 0) &&
           ((int)((ulonglong)(*(longlong *)(lVar4 + 0x240) - *(longlong *)(lVar4 + 0x238)) >> 5) <
            *(int *)(lVar4 + 0x1b0) * *(int *)(lVar4 + 0x1ac))) goto LAB_1400337b7;
      }
      if (*(longlong *)(param_1 + 0x348) == 0) {
LAB_1400337b7:
        FUN_14000169c(local_50,&DAT_140171466);
        local_2c = 1;
        lVar4 = param_1;
        if (*(char *)(param_1 + 0x48) == '\0') {
          for (plVar3 = *(longlong **)(param_1 + 0x300);
              (lVar4 = param_1, plVar3 != *(longlong **)(param_1 + 0x308) &&
              ((lVar4 = *plVar3, *(longlong *)(lVar4 + 0x18) != 0 ||
               (*(char *)(lVar4 + 0x48) == '\0')))); plVar3 = plVar3 + 2) {
          }
        }
        FUN_140037f04(lVar4 + 0x278,&local_2c,local_50);
        FUN_1400017de(local_50);
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      break;
    case 2:
    case 3:
    case 4:
      cVar1 = FUN_14003429c(param_1,param_2,uVar2,0);
      return cVar1;
    case 5:
      cVar1 = FUN_140033d10(param_1,param_2);
      return cVar1;
    case 6:
      FUN_1400017de(*(longlong *)(param_2 + 8) + -0x20);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -0x20;
      cVar1 = '\0';
      break;
    default:
      FUN_14000169c(local_70,"unrecognized classifier (you should not see this!)");
      FUN_140036a0a(local_b0,local_70);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_b0,&DAT_14017a578);
    }
  }
  else {
switchD_1400336f0_caseD_0:
    cVar1 = FUN_14003602c(param_1,param_2,0);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x31c) != '\0')) {
      *param_3 = '\x01';
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

