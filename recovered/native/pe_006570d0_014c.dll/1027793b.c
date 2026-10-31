/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027793b */

/* WARNING: Removing unreachable block (ram,0x102779c5) */

char FUN_1027793b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  uVar2 = __aullshr();
  if (param_5 == 0) {
    cVar1 = '\x01' - (uVar2 < 8);
  }
  else {
    iVar3 = FUN_10278900();
    if (iVar3 == 0) {
      cVar1 = FUN_10277889(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar3 == 0x200) {
        if (uVar2 == 0) {
          return '\0';
        }
        if (*(int *)(param_1 + 4) < 0) {
          return '\0';
        }
      }
      else {
        if (iVar3 != 0x100) {
          return '\0';
        }
        if (uVar2 == 0) {
          return '\0';
        }
        if (0 < *(int *)(param_1 + 4)) {
          return '\0';
        }
        if (-1 < *(int *)(param_1 + 4)) {
          return '\0';
        }
      }
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

