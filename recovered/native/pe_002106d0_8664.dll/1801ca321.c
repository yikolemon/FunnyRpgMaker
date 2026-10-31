/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca321 */

undefined8 FUN_1801ca321(uint *param_1,uint *param_2,ulonglong *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  if (*param_1 < *(uint *)(param_4 + 4)) {
    do {
      puVar1 = *(uint **)(*(longlong *)(param_4 + 0x20) + uVar2 * 8);
      if (puVar1 != (uint *)0x0) {
        if (param_2 != (uint *)0x0) {
          uVar2 = (ulonglong)*puVar1;
          *param_2 = *puVar1;
        }
        if (param_3 != (ulonglong *)0x0) {
          uVar2 = *(ulonglong *)(puVar1 + 2);
          *param_3 = uVar2;
        }
        *param_1 = *param_1 + 1;
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      *param_1 = (uint)uVar2;
    } while (uVar2 < *(uint *)(param_4 + 4));
  }
  return 0;
}

