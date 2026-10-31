/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434a4a */

int __fastcall FUN_00434a4a(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 auStack_28 [2];
  ushort local_26;
  int local_24 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_28;
  FUN_00434bc7(local_24,(ushort *)
                        ((uint)*(byte *)(param_2 + 3) + param_2 +
                        (uint)*(byte *)(param_2 + 2) * 0x100));
  puVar3 = (ushort *)(param_2 + 6);
  do {
    uVar1 = FUN_00434bf6(local_24,&local_26);
    if ((char)uVar1 == '\0') {
      iVar2 = 0;
      break;
    }
    iVar2 = FUN_00434c5a((uint)local_26,(uint)(ushort)(*puVar3 << 8 | *puVar3 >> 8),param_1,param_3)
    ;
    puVar3 = puVar3 + 1;
  } while (iVar2 == 0);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_28);
  }
  return iVar2;
}

