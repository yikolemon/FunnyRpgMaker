/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006221c */

void FUN_14006221c(undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
                  char param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x3e0);
  FUN_1400b3c00(param_1,0,0x448);
  FUN_14006202b((undefined8 *)param_1,param_2,param_3,param_4,param_5);
  *(longlong *)(param_1[5] + 0x10) = lVar2;
  uVar1 = *(uint *)(lVar2 + 0xa0);
  *(uint *)(param_1[0x1f] + 0x1c) = uVar1;
  *(undefined8 *)(param_1[0x20] + 0x10) = *(undefined8 *)(lVar2 + 0x5b8);
  uVar3 = FUN_140063f8f(*(int *)(lVar2 + 0x608),uVar1);
  *(int *)(param_1[0x20] + 4) = (int)uVar3;
  *(undefined4 *)(param_1[0x21] + 4) = param_6;
  *(undefined8 *)(param_1[0x21] + 0x18) = param_7;
  *(undefined8 *)param_1[0x22] = param_8;
  return;
}

