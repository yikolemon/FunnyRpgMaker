/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401459dc */

void FUN_1401459dc(undefined8 param_1,ushort param_2,ushort *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140128a1f(param_1,((uint)param_2 + (uint)param_2 * 4) * 5,&local_24);
  *(longlong *)(param_3 + 4) = lVar1;
  if (local_24 == 0) {
    *param_3 = param_2;
    param_3[1] = 0;
    lVar2 = (ulonglong)param_2 * 8;
    *(longlong *)(param_3 + 8) = lVar1 + lVar2;
    lVar1 = lVar1 + lVar2 + lVar2;
    *(longlong *)(param_3 + 0xc) = lVar1;
    lVar1 = lVar1 + lVar2;
    *(longlong *)(param_3 + 0x14) = lVar1;
    *(longlong *)(param_3 + 0x10) = lVar1;
    param_3[0x18] = 0;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

