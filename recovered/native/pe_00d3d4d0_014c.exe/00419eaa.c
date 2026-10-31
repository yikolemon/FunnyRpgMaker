/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00419eaa */

undefined4 __thiscall FUN_00419eaa(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  DWORD local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  uVar2 = CONCAT31((int3)(local_14 >> 8),1);
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      local_18 = 0;
      BVar1 = WriteFile(*(HANDLE *)((int)this + 4),(LPCVOID)(param_1 + uVar3),param_2 - uVar3,
                        &local_18,(LPOVERLAPPED)0x0);
      if ((BVar1 == 0) || (local_18 == 0)) {
        if (*(HANDLE *)((int)this + 4) != (HANDLE)0xffffffff) {
          CloseHandle(*(HANDLE *)((int)this + 4));
          *(undefined4 *)((int)this + 4) = 0xffffffff;
        }
        uVar2 = 0;
        goto LAB_00419f17;
      }
      uVar3 = uVar3 + local_18;
    } while (uVar3 < param_2);
    uVar2 = CONCAT31((int3)(local_18 >> 8),1);
  }
LAB_00419f17:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

