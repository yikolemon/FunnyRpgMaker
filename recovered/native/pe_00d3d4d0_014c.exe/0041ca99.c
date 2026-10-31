/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ca99 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0041ca99(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  puVar2 = &LAB_004219f8;
  if (param_2 == 0) {
    puVar2 = &LAB_00421a46;
  }
  puVar3 = &LAB_00421a36;
  if (param_2 == 0) {
    puVar3 = &LAB_00421a6f;
  }
  param_1[3] = puVar2;
  param_1[4] = puVar3;
  iVar1 = FUN_0041c6b3(param_3,_DAT_004d73c0,_UNK_004d73c4,_UNK_004d73c8,_UNK_004d73cc,&local_10);
  param_1[5] = iVar1;
  if (DAT_0050e8c0 == (local_c ^ (uint)&stack0xffffffd8)) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&stack0xffffffd8);
}

