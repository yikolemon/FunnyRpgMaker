/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140165ff8 */

void FUN_140165ff8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x298);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x240);
  param_1[6] = *(longlong *)(lVar1 + 0x248);
  param_1[4] = *(longlong *)(lVar2 + 0x28);
  param_1[3] = *(longlong *)(lVar2 + 0x30 + (ulonglong)(param_2 != 0) * 8);
  return;
}

