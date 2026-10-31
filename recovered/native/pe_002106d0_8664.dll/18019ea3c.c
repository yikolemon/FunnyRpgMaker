/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ea3c */

uint FUN_18019ea3c(undefined8 param_1)

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
  
  bVar1 = thunk_FUN_18013698f("NoHinting",param_1,1);
  bVar2 = thunk_FUN_18013698f("NoAutoHint",param_1,2);
  bVar3 = thunk_FUN_18013698f("ForceAutoHint",param_1,4);
  bVar4 = thunk_FUN_18013698f("LightHinting",param_1,8);
  bVar5 = thunk_FUN_18013698f("MonoHinting",param_1,0x10);
  bVar6 = thunk_FUN_18013698f("Bold",param_1,0x20);
  bVar7 = thunk_FUN_18013698f("Oblique",param_1,0x40);
  bVar8 = thunk_FUN_18013698f("Monochrome",param_1,0x80);
  bVar9 = thunk_FUN_18013698f("LoadColor",param_1,0x100);
  uVar10 = thunk_FUN_18013698f("Bitmap",param_1,0x200);
  return CONCAT31((int3)((uint)uVar10 >> 8),
                  (byte)uVar10 | bVar9 | bVar8 |
                  bVar7 | bVar6 | bVar5 | bVar4 | bVar3 | bVar2 | bVar1) & 0xffffff01;
}

