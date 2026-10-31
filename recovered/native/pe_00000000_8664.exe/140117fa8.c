/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140117fa8 */

uint FUN_140117fa8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  
  bVar1 = thunk_FUN_1400af8bf("NoHinting",param_1,1);
  bVar2 = thunk_FUN_1400af8bf("NoAutoHint",param_1,2);
  bVar3 = thunk_FUN_1400af8bf("ForceAutoHint",param_1,4);
  bVar4 = thunk_FUN_1400af8bf("LightHinting",param_1,8);
  bVar5 = thunk_FUN_1400af8bf("MonoHinting",param_1,0x10);
  bVar6 = thunk_FUN_1400af8bf("Bold",param_1,0x20);
  bVar7 = thunk_FUN_1400af8bf("Oblique",param_1,0x40);
  bVar8 = thunk_FUN_1400af8bf("Monochrome",param_1,0x80);
  bVar9 = thunk_FUN_1400af8bf("LoadColor",param_1,0x100);
  uVar10 = thunk_FUN_1400af8bf("Bitmap",param_1,0x200);
  return CONCAT31((int3)((uint)uVar10 >> 8),
                  (byte)uVar10 | bVar9 | bVar8 |
                  bVar7 | bVar6 | bVar5 | bVar4 | bVar3 | bVar2 | bVar1) & 0xffffff01;
}

