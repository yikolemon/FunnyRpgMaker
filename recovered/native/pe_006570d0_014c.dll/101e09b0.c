/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e09b0 */

undefined2 __fastcall FUN_101e09b0(int param_1,uint param_2)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  cVar2 = FUN_101e0ad0(&local_10);
  if (cVar2 != '\0') {
    uVar1 = *(ushort *)(param_1 + 4);
    uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (param_1 + uVar4 * 2 + 6 <= param_2) {
      uVar3 = CONCAT11((char)uVar1,uVar4 == local_10);
      goto LAB_101e0a01;
    }
  }
  uVar3 = 0;
LAB_101e0a01:
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

