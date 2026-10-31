/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a6948 */

void FUN_1404a6948(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,ulonglong param_10)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1404b4ef0(*param_1,param_6 + 1,1,&local_18,param_4,param_5);
  lVar3 = (param_3 - (ulonglong)(0 < param_6)) - (ulonglong)((int)local_18 == 0x2d);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  uVar4 = param_10;
  iVar2 = FUN_1404b4d10(param_2 + (ulonglong)(0 < param_6) + (ulonglong)((int)local_18 == 0x2d),
                        lVar3,param_6 + 1,&local_18,uVar1,param_9,param_10);
  if (iVar2 == 0) {
    FUN_1404a6764(param_2,param_3,param_6,param_7,param_8,&local_18,uVar4 & 0xffffffffffffff00,
                  param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}

