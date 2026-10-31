/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100162c8 */

undefined4 __thiscall FUN_100162c8(int param_1,int param_2,uint param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  DWORD local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar2 = 1;
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      local_18 = 0;
      BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),(LPVOID)(param_2 + uVar3),param_3 - uVar3,&local_18,
                       (LPOVERLAPPED)0x0);
      if ((BVar1 == 0) || (local_18 == 0)) {
        if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
          CloseHandle(*(HANDLE *)(param_1 + 4));
          *(undefined4 *)(param_1 + 4) = 0xffffffff;
        }
        uVar2 = 0;
        goto LAB_10016335;
      }
      uVar3 = uVar3 + local_18;
    } while (uVar3 < param_3);
    uVar2 = 1;
  }
LAB_10016335:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

