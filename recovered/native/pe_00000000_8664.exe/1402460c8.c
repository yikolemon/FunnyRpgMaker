/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402460c8 */

void FUN_1402460c8(longlong param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  *param_4 = param_3;
  param_4[1] = (longlong)puVar1;
  *puVar1 = param_4;
  *(longlong **)(param_3 + 8) = param_4;
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (param_2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  if (*(longlong *)(lVar2 + lVar3) == *(longlong *)(param_1 + 8)) {
    *(longlong **)(lVar2 + lVar3) = param_4;
  }
  else {
    if (*(longlong *)(lVar2 + lVar3) == param_3) {
      *(longlong **)(lVar2 + lVar3) = param_4;
      return;
    }
    if (*(undefined8 **)(lVar2 + 8 + lVar3) != puVar1) {
      return;
    }
  }
  *(longlong **)(lVar2 + 8 + lVar3) = param_4;
  return;
}

