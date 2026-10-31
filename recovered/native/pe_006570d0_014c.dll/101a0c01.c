/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a0c01 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a0c01(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 local_98 [16];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_1010ad36();
  local_98[0] = 0;
  fVar1 = *(float *)(iVar2 + 0xc);
  fVar5 = (float)*(undefined8 *)(iVar2 + 8) + (float)DAT_103026d0;
  local_a0 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar2 + 8) >> 0x20) + DAT_103026d0._4_4_,
                      fVar5);
  FUN_10111d56(&local_a0,4,local_98);
  FUN_10107d2b("Same title as another window##1",0,0);
  FUN_101032c6("imgui_demo.cpp",0x27f8,"Examples/Manipulating window titles##1");
  FUN_1012d08c("This is window 1.\nMy title is the same as window 2, but my identifier is unique.");
  FUN_1010ad44();
  local_98[0] = 0;
  local_a0 = CONCAT44(DAT_10302770 + fVar1,fVar5);
  FUN_10111d56(&local_a0,4,local_98);
  FUN_10107d2b("Same title as another window##2",0,0);
  FUN_101032c6("imgui_demo.cpp",0x27fe,"Examples/Manipulating window titles##2");
  FUN_1012d08c("This is window 2.\nMy title is the same as window 1, but my identifier is unique.");
  FUN_1010ad44();
  uVar3 = FUN_1010335d();
  fVar4 = (float10)FUN_10103354();
  FUN_101b5fc7(local_98,"Animated title %c %d###AnimatedTitle",
               (int)(char)(&DAT_1033b928)[(int)((double)fVar4 * DAT_10302778) & 3],uVar3);
  fStack_a4 = fVar1 + DAT_10302780;
  local_a0 = 0;
  fStack_a8 = fVar5;
  FUN_10111d56(&fStack_a8,4,&local_a0);
  FUN_10107d2b(local_98,0,0);
  FUN_101032c6("imgui_demo.cpp",0x2807,"Examples/Manipulating window titles##3");
  FUN_1012d08c("This window has a changing title.");
  FUN_1010ad44();
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

