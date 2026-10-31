/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025efcf */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025efcf(uint param_1,undefined4 param_2,undefined2 ****param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  undefined2 ****local_474;
  int local_470;
  int local_46c;
  undefined4 local_468;
  undefined4 ****local_464 [277];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_464[0] = (undefined4 ****)param_3;
  if ((param_5 == 0) || ((param_4 != 0 && (param_3 == (undefined2 ****)0x0)))) {
    *(undefined1 *)(param_6 + 0x1c) = 1;
    *(undefined4 *)(param_6 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_6);
    goto LAB_1025f144;
  }
  local_474 = param_3;
  local_470 = param_4;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, param_3 == (undefined2 ****)0x0)) {
    local_468 = 1;
  }
  local_464[0] = &local_474;
  FUN_10260a44(local_464,param_1,param_2,param_5,param_6,param_7);
  local_10 = 0;
  local_464[0] = (undefined4 ****)FUN_10260ab0();
  if (param_3 != (undefined2 ****)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_4 != 0) {
          if (local_46c == param_4) {
            *(undefined2 *)((int)param_3 + (param_4 + -1) * 2) = 0;
          }
          else {
LAB_1025f12a:
            *(undefined2 *)((int)param_3 + local_46c * 2) = 0;
          }
        }
      }
      else if (param_4 != 0) {
        if ((int)local_464[0] < 0) {
          *(undefined2 *)param_3 = 0;
        }
        else {
          if (local_46c != param_4) goto LAB_1025f12a;
          *(undefined2 *)((int)param_3 + (param_4 + -1) * 2) = 0;
        }
      }
    }
    else if (((param_4 != 0) || (local_464[0] == (undefined4 ****)0x0)) && (local_46c != param_4)) {
      *(undefined2 *)((int)param_3 + local_46c * 2) = 0;
    }
  }
  FUN_1025ed21();
LAB_1025f144:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

