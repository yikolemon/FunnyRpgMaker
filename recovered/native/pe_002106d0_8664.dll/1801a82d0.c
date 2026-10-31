/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a82d0 */

void FUN_1801a82d0(void)

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
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_108;
  lVar3 = FUN_18010f8ee();
  local_d8[0] = 0;
  fVar1 = *(float *)(lVar3 + 0xc);
  fVar5 = (float)*(undefined8 *)(lVar3 + 8) + (float)DAT_180329030;
  local_e0 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20) + DAT_180329030._4_4_,
                      fVar5);
  FUN_180116a8b(&local_e0,4,local_d8);
  FUN_18010ca66("Same title as another window##1",0,0);
  FUN_180107e9e("imgui_demo.cpp",0x27f8,"Examples/Manipulating window titles##1");
  FUN_1801330a5("This is window 1.\nMy title is the same as window 2, but my identifier is unique.")
  ;
  FUN_18010f900();
  local_d8[0] = 0;
  local_e0 = CONCAT44(DAT_1803290d0 + fVar1,fVar5);
  FUN_180116a8b(&local_e0,4,local_d8);
  FUN_18010ca66("Same title as another window##2",0,0);
  FUN_180107e9e("imgui_demo.cpp",0x27fe,"Examples/Manipulating window titles##2");
  FUN_1801330a5("This is window 2.\nMy title is the same as window 1, but my identifier is unique.")
  ;
  FUN_18010f900();
  uVar2 = FUN_180107f41();
  dVar4 = (double)FUN_180107f34();
  FUN_1801bf199(local_d8,"Animated title %c %d###AnimatedTitle",
                (int)(char)(&DAT_18036ba52)[(int)(dVar4 * DAT_1803290d8) & 3],uVar2);
  local_e4 = fVar1 + DAT_1803290e0;
  local_e0 = 0;
  local_e8 = fVar5;
  FUN_180116a8b(&local_e8,4,&local_e0);
  FUN_18010ca66(local_d8,0,0);
  FUN_180107e9e("imgui_demo.cpp",0x2807,"Examples/Manipulating window titles##3");
  FUN_1801330a5("This window has a changing title.");
  FUN_18010f900();
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_108);
}

