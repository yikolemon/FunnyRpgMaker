/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ce05 */

void FUN_18017ce05(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < (int)param_2) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_1 + 0x46d8 + lVar2) != 0) {
        thunk_FUN_180290e40();
        puVar1 = (undefined8 *)(param_1 + 0x46d0 + lVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      if (*(longlong *)(param_1 + 0x46e0 + lVar2) != 0) {
        thunk_FUN_180290e40();
        *(undefined8 *)(param_1 + 0x46e0 + lVar2) = 0;
        *(undefined8 *)(param_1 + 0x46f0 + lVar2) = 0;
      }
      if (*(longlong *)(param_1 + 0x46e8 + lVar2) != 0) {
        thunk_FUN_180290e40();
        *(undefined8 *)(param_1 + 0x46e8 + lVar2) = 0;
      }
      lVar2 = lVar2 + 0x60;
    } while ((ulonglong)param_2 * 0x60 != lVar2);
  }
  return;
}

