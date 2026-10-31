/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c83b */

undefined8 FUN_14003c83b(void)

{
  undefined8 uVar1;
  undefined1 local_180 [8];
  longlong local_178;
  longlong local_f0;
  short local_70 [30];
  int local_34;
  ushort local_30 [10];
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  FUN_14003d23e(local_180,&DAT_140f2a240,0x20,0x40,1);
  if (local_f0 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14003d296(local_180,local_70,0x40);
    uVar1 = 0;
    if ((local_178 == 0x40) && (local_70[0] == 0x5a4d)) {
      FUN_14003d3fe(local_180,(longlong)local_34,0);
      FUN_14003d296(local_180,local_1c,4);
      uVar1 = 0;
      if (local_1c[0] == 0x4550) {
        FUN_14003d296(local_180,local_30,0x14);
        uVar1 = 0;
        if (local_178 == 0x14) {
          if (local_30[0] < 0x8664) {
            if (local_30[0] == 0x14c) {
              uVar1 = 1;
            }
            else if (local_30[0] == 0x1c0) {
              uVar1 = 3;
            }
          }
          else if (local_30[0] == 0xaa64) {
            uVar1 = 4;
          }
          else if (local_30[0] == 0x8664) {
            uVar1 = 2;
          }
        }
      }
    }
  }
  FUN_140012d70(local_180);
  return uVar1;
}

