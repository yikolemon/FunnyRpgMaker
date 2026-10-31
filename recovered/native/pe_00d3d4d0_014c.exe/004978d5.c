/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004978d5 */

undefined4 FUN_004978d5(void)

{
  int in_EAX;
  int iVar1;
  
  if (DAT_00521edc == '\0') {
    DAT_00521ed4 = &DAT_0051b118;
    DAT_00521ed0 = &DAT_0051b440;
    DAT_00521ecc = &DAT_0051b338;
    iVar1 = FUN_004961bb();
    in_EAX = FUN_00497c96(0xfffffffd,'\x01',iVar1,&DAT_00521ed4);
    DAT_00521edc = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

