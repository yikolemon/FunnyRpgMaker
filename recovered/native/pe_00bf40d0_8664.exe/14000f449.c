/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f449 */

ushort * FUN_14000f449(ushort *param_1,ushort *param_2,longlong *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort *puVar3;
  byte bVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 == 0x7d) {
    return param_1;
  }
  puVar3 = FUN_14000f5d5(param_1,param_2,param_3);
  if (puVar3 == param_2) {
    return puVar3;
  }
  uVar2 = *puVar3;
  if (uVar2 == 0x20) {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_14000f4b7:
    if (8 < bVar4) goto LAB_14000f5ab;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    puVar3 = puVar3 + 1;
  }
  else {
    if (uVar2 == 0x2d) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_14000f4b7;
    }
    if (uVar2 == 0x2b) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_14000f4b7;
    }
  }
  if (puVar3 != param_2) {
    uVar2 = *puVar3;
    if (uVar2 == 0x23) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_14000f5ab;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      puVar3 = puVar3 + 1;
      if (puVar3 == param_2) {
        return puVar3;
      }
      uVar2 = *puVar3;
    }
    if (uVar2 == 0x30) {
      *(undefined1 *)((longlong)param_3 + 0x1a) = 1;
      if (9 < (byte)((char)param_3[3] - 1U)) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011be01);
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      puVar3 = puVar3 + 1;
      if (puVar3 == param_2) {
        return puVar3;
      }
    }
    puVar3 = FUN_14000f713(puVar3,param_2,param_3);
    if (puVar3 != param_2) {
      uVar2 = *puVar3;
      if (uVar2 == 0x2e) {
        puVar3 = FUN_14000f7c7((longlong)puVar3,param_2,param_3);
        if (puVar3 == param_2) {
          return puVar3;
        }
        uVar2 = *puVar3;
      }
      if (uVar2 == 0x4c) {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_14000f5ab:
                    /* WARNING: Subroutine does not return */
          FUN_14000b455(0x14011be38);
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        puVar3 = puVar3 + 1;
        if (puVar3 == param_2) {
          return puVar3;
        }
        uVar2 = *puVar3;
      }
      if (uVar2 == 0x7d) {
        FUN_14000f8b6(param_3,0);
      }
      else {
        FUN_14000f8b6(param_3,uVar2);
        puVar3 = puVar3 + 1;
      }
    }
  }
  return puVar3;
}

