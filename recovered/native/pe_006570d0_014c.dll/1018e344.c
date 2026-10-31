/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e344 */

void __thiscall FUN_1018e344(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  
  FUN_1018e3c0();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x20) = param_4;
  iVar1 = FUN_1018e2fa(param_2);
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  _Dst = (void *)FUN_100fa1fa(param_4 * param_3 * iVar1);
  *(void **)(param_1 + 0x28) = _Dst;
  _memset(_Dst,0,*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = DAT_10294490;
  return;
}

