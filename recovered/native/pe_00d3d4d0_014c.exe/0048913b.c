/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048913b */

void FUN_0048913b(uint param_1,undefined4 param_2,undefined2 ****param_3,int param_4,int param_5,
                 int *param_6,undefined4 param_7)

{
  undefined2 ****local_474;
  int local_470;
  int local_46c;
  undefined4 local_468;
  undefined2 *****local_464;
  __uint64 local_460 [7];
  undefined1 local_424 [1044];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_464 = (undefined2 *****)param_3;
  if ((param_5 == 0) || ((param_4 != 0 && (param_3 == (undefined2 ****)0x0)))) {
    *(undefined1 *)(param_6 + 7) = 1;
    param_6[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
    goto LAB_004892b0;
  }
  local_474 = param_3;
  local_470 = param_4;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, param_3 == (undefined2 ****)0x0)) {
    local_468 = 1;
  }
  local_464 = &local_474;
  FUN_004894dd(local_460,&local_464,param_1,param_2,param_5,param_6,param_7);
  local_10 = 0;
  local_464 = (undefined2 *****)FUN_00489549(local_460);
  if (param_3 != (undefined2 ****)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_4 != 0) {
          if (local_46c == param_4) {
            *(undefined2 *)((int)param_3 + param_4 * 2 + -2) = 0;
          }
          else {
LAB_00489296:
            *(undefined2 *)((int)param_3 + local_46c * 2) = 0;
          }
        }
      }
      else if (param_4 != 0) {
        if ((int)local_464 < 0) {
          *(undefined2 *)param_3 = 0;
        }
        else {
          if (local_46c != param_4) goto LAB_00489296;
          *(undefined2 *)((int)param_3 + param_4 * 2 + -2) = 0;
        }
      }
    }
    else if (((param_4 != 0) || (local_464 == (undefined2 *****)0x0)) && (local_46c != param_4)) {
      *(undefined2 *)((int)param_3 + local_46c * 2) = 0;
    }
  }
  FUN_00489001((int)local_424);
LAB_004892b0:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

