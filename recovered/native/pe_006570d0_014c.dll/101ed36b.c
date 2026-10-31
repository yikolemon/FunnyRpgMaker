/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed36b */

void __fastcall FUN_101ed36b(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_10;
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,0x6670676d,param_2,&uStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2b0) = uStack_10;
    FUN_101c4b40(param_2,uStack_10,param_1 + 0x2b4);
  }
  else {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&uStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

