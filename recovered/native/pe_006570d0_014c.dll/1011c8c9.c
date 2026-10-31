/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c8c9 */

undefined4 FUN_1011c8c9(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  uint local_10;
  
  iVar1 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockBuilderAddNode 0x%08X flags=%08X\n",param_1,param_2);
  }
  if (param_1 != 0) {
    FUN_1011c980(param_1);
  }
  if ((param_2 >> 10 & 1) == 0) {
    puVar2 = (undefined4 *)FUN_1011b94c();
    puVar2[2] = param_2;
    puVar2[4] = puVar2[1] | puVar2[3] | param_2;
  }
  else {
    local_18 = 0;
    FUN_1011c2a7(param_1,&local_18,(param_2 & 0xfffffbfe) + 1,0);
    puVar2 = (undefined4 *)FUN_1011b528(iVar1,param_1);
  }
  puVar2[0x23] = *(undefined4 *)(iVar1 + 4);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

