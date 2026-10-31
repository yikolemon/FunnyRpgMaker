/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410941 */

uint * __cdecl FUN_00410941(uint *param_1,uint *param_2,int *param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_1c;
  uVar6 = FUN_00410f09((ushort *)param_1,(ushort *)param_2,&local_18);
  uVar3 = -(uint)((uVar6 & 0x100000000) == 0) | (int)uVar6 - (int)param_1 >> 1;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504ac6);
  }
  puVar4 = (uint *)((int)param_1 + uVar3 * 2);
  if (puVar4 == param_2) {
    puVar4 = param_1;
  }
  do {
    sVar1 = (short)*puVar4;
    if (sVar1 == 0x5e) {
      uVar2 = 3;
LAB_004109ac:
      if ((int)puVar4 - (int)param_1 != 0) {
        local_19 = uVar2;
        if ((short)*param_1 == 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_0040ba4e(0x504bd2);
        }
        FUN_00410e8c(param_3,param_1,(int)puVar4 - (int)param_1 >> 1);
        param_1 = puVar4;
        uVar2 = local_19;
      }
      param_1 = (uint *)((int)param_1 + 2);
      *(undefined1 *)(*param_3 + 9) = uVar2;
      break;
    }
    if (sVar1 == 0x3e) {
      uVar2 = 2;
      goto LAB_004109ac;
    }
    if (sVar1 == 0x3c) {
      uVar2 = 1;
      goto LAB_004109ac;
    }
    bVar5 = puVar4 != param_1;
    puVar4 = param_1;
  } while (bVar5);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_1c);
  }
  return param_1;
}

