/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444cdb */

undefined4 __fastcall FUN_00444cdb(char *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  
  pauVar1 = (undefined1 (*) [16])FUN_00444e6e(param_1);
  iVar3 = 0;
  do {
    pauVar2 = FUN_00488210(pauVar1,(undefined1 (*) [16])(&DAT_004e2a6c + iVar3));
    if (pauVar2 != (undefined1 (*) [16])0x0) {
      return CONCAT31((int3)((uint)pauVar2 >> 8),1);
    }
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 400);
  return 0;
}

