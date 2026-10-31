/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043924 */

void FUN_140043924(longlong param_1,ushort param_2,ushort *param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  pauVar1 = FUN_14001c423(param_1,((uint)param_2 + (uint)param_2 * 4) * 5,&local_24);
  *(undefined1 (**) [32])(param_3 + 4) = pauVar1;
  if (local_24 == 0) {
    *param_3 = param_2;
    param_3[1] = 0;
    lVar3 = (ulonglong)param_2 * 8;
    puVar2 = *pauVar1 + lVar3;
    *(undefined1 **)(param_3 + 8) = puVar2;
    puVar2 = puVar2 + lVar3;
    *(undefined1 **)(param_3 + 0xc) = puVar2;
    *(undefined1 **)(param_3 + 0x14) = puVar2 + lVar3;
    *(undefined1 **)(param_3 + 0x10) = puVar2 + lVar3;
    param_3[0x18] = 0;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

