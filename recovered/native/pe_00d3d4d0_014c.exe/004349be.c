/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004349be */

int __fastcall FUN_004349be(uint *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [2];
  ushort local_26;
  int local_24 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_28;
  uVar1 = *(ushort *)(param_2 + 4);
  FUN_00434bc7(local_24,(ushort *)
                        ((uint)*(byte *)(param_2 + 3) + param_2 +
                        (uint)*(byte *)(param_2 + 2) * 0x100));
  do {
    uVar2 = FUN_00434bf6(local_24,&local_26);
    if ((char)uVar2 == '\0') {
      iVar3 = 0;
      break;
    }
    iVar3 = FUN_00434c5a((uint)local_26,
                         (uint)local_26 + (uint)(ushort)(uVar1 << 8 | uVar1 >> 8) & 0xffff,param_1,
                         param_3);
  } while (iVar3 == 0);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_28);
  }
  return iVar3;
}

