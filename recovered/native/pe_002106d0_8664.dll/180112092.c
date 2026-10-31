/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112092 */

void FUN_180112092(longlong param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
  *(longlong *)(param_1 + 0x408) = param_3;
  *(longlong *)(param_1 + 0x438) = param_1;
  *(longlong *)(param_1 + 0x430) = param_1;
  *(longlong *)(param_1 + 0x428) = param_1;
  *(longlong *)(param_1 + 0x420) = param_1;
  *(longlong *)(param_1 + 0x418) = param_1;
  if ((((param_2 & 0x3000000) == 0x1000000 && param_3 != 0) &&
      (*(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_3 + 0x428),
      (*(byte *)(param_1 + 0x495) & 1) == 0)) && ((*(byte *)(param_3 + 0x16) & 0x80) == 0)) {
    *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_3 + 0x418);
  }
  if ((param_3 != 0) && ((param_2 & 0x4000000) != 0)) {
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_3 + 0x420);
  }
  if (((param_3 != 0) && ((param_2 & 0x8000000) == 0)) && ((param_2 & 0x7000000) != 0)) {
    *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_3 + 0x430);
  }
  bVar1 = *(byte *)(param_1 + 0x1d);
  lVar2 = param_1;
  while ((bVar1 & 1) != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x408);
    *(longlong *)(param_1 + 0x438) = lVar2;
    bVar1 = *(byte *)(lVar2 + 0x1d);
  }
  return;
}

