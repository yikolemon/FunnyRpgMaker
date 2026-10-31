/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1460 */

void FUN_1400e1460(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  *param_5 = param_3;
  uVar1 = *param_2;
  iVar2 = FUN_1400da5d0(local_28,0,param_2,param_1 + 0x10);
  if (0 < iVar2) {
    lVar3 = (longlong)(iVar2 + -1);
    if (param_4 - *param_5 < lVar3) {
      *param_2 = uVar1;
    }
    else if (0 < iVar2 + -1) {
      FUN_140135ff0(*param_5,local_28,lVar3);
      *param_5 = *param_5 + lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
}

