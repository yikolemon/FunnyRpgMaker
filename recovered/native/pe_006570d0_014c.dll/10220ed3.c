/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220ed3 */

int __fastcall FUN_10220ed3(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  local_10 = 0;
  if (param_1 == 0) {
    iVar2 = 6;
  }
  else {
    puVar1 = (undefined4 *)FUN_101c21f6(param_1,0x10,&local_10);
    iVar2 = local_10;
    if (local_10 == 0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *param_2 = puVar1;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

