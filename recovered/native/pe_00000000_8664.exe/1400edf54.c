/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400edf54 */

void FUN_1400edf54(void)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8 [17];
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  lVar3 = FUN_140088c06();
  local_d8[0] = 0;
  fVar1 = *(float *)(lVar3 + 0xc);
  fVar5 = (float)*(undefined8 *)(lVar3 + 8) + (float)DAT_140e8d3d0;
  local_e0 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20) + DAT_140e8d3d0._4_4_,
                      fVar5);
  FUN_14008fda3(&local_e0,4,local_d8);
  FUN_140085d7e("Same title as another window##1",0,0);
  FUN_1400811b6("imgui_demo.cpp",0x27f8,"Examples/Manipulating window titles##1");
  FUN_1400abfd5("This is window 1.\nMy title is the same as window 2, but my identifier is unique.")
  ;
  FUN_140088c18();
  local_d8[0] = 0;
  local_e0 = CONCAT44(DAT_140e8d470 + fVar1,fVar5);
  FUN_14008fda3(&local_e0,4,local_d8);
  FUN_140085d7e("Same title as another window##2",0,0);
  FUN_1400811b6("imgui_demo.cpp",0x27fe,"Examples/Manipulating window titles##2");
  FUN_1400abfd5("This is window 2.\nMy title is the same as window 1, but my identifier is unique.")
  ;
  FUN_140088c18();
  uVar2 = FUN_140081259();
  dVar4 = (double)FUN_14008124c();
  FUN_140104e1d(local_d8,"Animated title %c %d###AnimatedTitle",
                (int)(char)(&DAT_140ecc3ae)[(int)(dVar4 * DAT_140e8d478) & 3],uVar2);
  local_e4 = fVar1 + DAT_1401c8650;
  local_e0 = 0;
  local_e8 = fVar5;
  FUN_14008fda3(&local_e8,4,&local_e0);
  FUN_140085d7e(local_d8,0,0);
  FUN_1400811b6("imgui_demo.cpp",0x2807,"Examples/Manipulating window titles##3");
  FUN_1400abfd5("This window has a changing title.");
  FUN_140088c18();
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_108);
}

