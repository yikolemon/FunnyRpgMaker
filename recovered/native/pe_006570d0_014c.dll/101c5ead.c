/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5ead */

int __fastcall
FUN_101c5ead(undefined4 param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar2 = FUN_101c4970(param_1,&local_18);
  iVar3 = local_18;
  if ((local_18 == 0) && (iVar3 = 2, iVar2 == 0x74797031)) {
    uVar1 = FUN_101c4692(param_1,&local_18);
    iVar3 = local_18;
    if (local_18 == 0) {
      local_20 = CONCAT22(local_20._2_2_,uVar1);
      iVar3 = FUN_101c4672(param_1,6);
      if (iVar3 == 0) {
        *param_5 = 0;
        if ((short)local_20 != 0) {
          uVar4 = local_20 & 0xffff;
          local_24 = -1;
          do {
            local_1c = uVar4;
            local_20 = FUN_101c4970(param_1,&local_18);
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_101c600c;
            iVar3 = FUN_101c4672(param_1,4);
            if (iVar3 != 0) goto LAB_101c600c;
            iVar3 = FUN_101c4970(param_1,&local_18);
            *param_3 = iVar3;
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_101c600c;
            iVar3 = FUN_101c4970(param_1,&local_18);
            *param_4 = iVar3;
            iVar3 = local_18;
            if (local_18 != 0) goto LAB_101c600c;
            if (local_20 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
LAB_101c5fe8:
              if (-1 < param_2) {
                local_24 = local_24 + 1;
                goto LAB_101c5fef;
              }
LAB_101c600a:
              iVar3 = 0;
              goto LAB_101c600c;
            }
            if (local_20 == 0x43494420) {
              *param_3 = *param_3 + 0x16;
              *param_4 = *param_4 + -0x16;
              *param_5 = 1;
              goto LAB_101c5fe8;
            }
LAB_101c5fef:
            if ((-1 < param_2) && (local_24 == param_2)) goto LAB_101c600a;
            uVar4 = local_1c - 1;
          } while (uVar4 != 0);
        }
        iVar3 = 0x8e;
      }
    }
  }
LAB_101c600c:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

