/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00438120 */

undefined2 __fastcall FUN_00438120(int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  uVar3 = FUN_00438240((ushort *)
                       ((uint)*(byte *)(param_1 + 3) + param_1 +
                       (uint)*(byte *)(param_1 + 2) * 0x100),param_2,&local_10);
  if ((char)uVar3 != '\0') {
    uVar1 = *(ushort *)(param_1 + 4);
    uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if ((ushort *)(param_1 + uVar4 * 2 + 6) <= param_2) {
      uVar2 = CONCAT11((char)uVar1,uVar4 == local_10);
      goto LAB_00438171;
    }
  }
  uVar2 = 0;
LAB_00438171:
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

