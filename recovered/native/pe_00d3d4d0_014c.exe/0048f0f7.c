/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f0f7 */

void __cdecl
FUN_0048f0f7(short *param_1,undefined4 *param_2,short *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  bVar2 = false;
  do {
    if (*param_1 == 0x22) {
      bVar1 = !bVar1;
      sVar3 = 0x22;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (short *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      sVar3 = *param_1;
      if (sVar3 == 0) goto LAB_0048f18d;
    }
    param_1 = param_1 + 1;
  } while ((bVar2) || ((sVar3 != 0x20 && (sVar3 != 9))));
  if (param_3 != (short *)0x0) {
    param_3[-1] = 0;
  }
LAB_0048f18d:
  bVar1 = false;
  while( true ) {
    sVar3 = *param_1;
    if (sVar3 != 0) {
      while ((sVar3 == 0x20 || (sVar3 == 9))) {
        param_1 = param_1 + 1;
        sVar3 = *param_1;
      }
    }
    if (sVar3 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar4 = 0;
      bVar2 = true;
      sVar3 = *param_1;
      while (sVar3 == 0x5c) {
        param_1 = param_1 + 1;
        uVar4 = uVar4 + 1;
        sVar3 = *param_1;
      }
      if (sVar3 == 0x22) {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (param_1[1] == 0x22)) {
            param_1 = param_1 + 1;
          }
          else {
            bVar2 = false;
            bVar1 = !bVar1;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (short *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      sVar3 = *param_1;
      if ((sVar3 == 0) || ((!bVar1 && ((sVar3 == 0x20 || (sVar3 == 9)))))) break;
      if (bVar2) {
        if (param_3 != (short *)0x0) {
          *param_3 = sVar3;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

