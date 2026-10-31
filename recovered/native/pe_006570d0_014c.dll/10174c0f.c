/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174c0f */

undefined4 __fastcall FUN_10174c0f(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  param_1[0x11f9] = 0;
  param_1[0x11fa] = -1;
  *(undefined1 *)(param_1 + 0x11f1) = 0xff;
  cVar1 = FUN_10175fbb();
  if (cVar1 == -0x28) {
    if (param_2 == 0) {
      bVar2 = FUN_10175fbb();
      if (bVar2 != 0xc2 && (bVar2 & 0xfe) != 0xc0) {
        do {
          iVar3 = FUN_10176042();
          if (iVar3 == 0) {
            return 0;
          }
LAB_10174c83:
          bVar2 = FUN_10175fbb();
          if (bVar2 == 0xff) {
            iVar3 = *param_1;
            if (*(int *)(iVar3 + 0x10) != 0) goto code_r0x10174c96;
            goto LAB_10174ca9;
          }
        } while ((bVar2 != 0xc2) && ((bVar2 & 0xfe) != 0xc0));
      }
      param_1[0x11f3] = (uint)(bVar2 == 0xc2);
      uVar5 = FUN_101765db();
      return uVar5;
    }
    uVar5 = 1;
  }
  else {
    FUN_10170e07();
    uVar5 = 0;
  }
  return uVar5;
code_r0x10174c96:
  iVar4 = (**(code **)(iVar3 + 0x18))(*(undefined4 *)(iVar3 + 0x1c));
  if (iVar4 != 0) {
    if (*(int *)(iVar3 + 0x20) != 0) {
LAB_10174ca9:
      if (*(uint *)(iVar3 + 0xac) < *(uint *)(iVar3 + 0xb0)) goto LAB_10174c83;
    }
    FUN_10170e07();
    return 0;
  }
  goto LAB_10174c83;
}

