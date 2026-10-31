/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed3e1 */

void __fastcall FUN_101ed3e1(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_10;
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,0x70726570,param_2,&uStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2b8) = uStack_10;
    FUN_101c4b40(param_2,uStack_10,param_1 + 700);
  }
  else {
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&uStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

