/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140056c67 */

int FUN_140056c67(undefined8 *param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  local_3c = 0;
  if (*param_4 != 0) {
    FUN_14001c53d(param_3,*param_4);
    *param_4 = 0;
  }
  if ((param_2 == 0) ||
     (uVar4 = param_2 - (*(char *)((longlong)param_1 + ((ulonglong)param_2 - 1)) == '\0'),
     uVar4 == 0)) {
LAB_140056d10:
    iVar1 = 0;
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (ulonglong)uVar4;
    uVar3 = 0;
    do {
      if (*(char *)((longlong)param_1 + uVar3) < ' ') goto LAB_140056d10;
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
    puVar2 = (undefined8 *)FUN_14001e961(param_3,uVar4 + 1,&local_3c);
    iVar1 = local_3c;
    if (local_3c == 0) {
      FUN_1400b3550(puVar2,param_1,uVar5);
      *(undefined1 *)((longlong)puVar2 + uVar5) = 0;
      iVar1 = local_3c;
    }
  }
  *param_4 = (longlong)puVar2;
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_68);
  }
  return iVar1;
}

