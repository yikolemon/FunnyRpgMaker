/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005570a */

int FUN_14005570a(longlong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 auStackY_78 [32];
  uint *local_48;
  undefined8 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  uVar4 = FUN_140056194((longlong)(param_2 + 0x36),param_1);
  iVar3 = 2;
  if (((int)uVar4 == 0) && (uVar5 = FUN_1400561d6((int *)(param_2 + 0x36)), (char)uVar5 != '\0')) {
    uVar4 = FUN_1400561f8(param_1,param_2[0x3b],(uint *)&local_48);
    iVar3 = (int)uVar4;
    if ((int)uVar4 == 0) {
      *param_2 = (uint)local_48;
      if ((int)param_3 < 0) {
        iVar3 = 0;
      }
      else {
        uVar8 = param_3 & 0xffff;
        iVar3 = 6;
        if ((int)uVar8 < (int)(uint)local_48) {
          uVar4 = FUN_1400562ae(param_2 + 0x51,param_1,uVar8,param_2[0x3b],param_2[0x48] != 0);
          iVar3 = (int)uVar4;
          if ((int)uVar4 == 0) {
            uVar4 = FUN_1400565fe((longlong *)(param_2 + 0x5e),param_1,param_2[0x5c],param_2[0x5b]);
            local_34 = (int)uVar4;
            iVar3 = local_34;
            if (local_34 == 0) {
              param_2[1] = uVar8;
              uVar4 = (ulonglong)param_2[0x86];
              uVar8 = param_2[2];
              uVar7 = uVar8 | 1;
              param_2[4] = param_2[0x86] + 1;
              param_2[2] = uVar7;
              if (uVar4 != 0) {
                piVar10 = (int *)(*(longlong *)(param_2 + 0x8a) + 0xc);
                do {
                  if (*piVar10 != 0) {
                    if ((int)uVar4 != 0) goto LAB_140055857;
                    break;
                  }
                  piVar10 = piVar10 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              if (param_2[0x7c] == 0) {
                iVar3 = 3;
              }
              else {
                uVar7 = uVar8 & 0xfffffffe;
LAB_140055857:
                uVar8 = param_2[0x68];
                uVar1 = param_2[0x7c];
                uVar7 = (uVar8 & 1) * 0x10 + 0x10 | ~uVar8 & 4 | uVar7;
                param_2[2] = uVar7;
                if (uVar1 != 0) {
                  uVar7 = uVar7 | 2;
                  param_2[2] = uVar7;
                }
                if (param_2[0x8c] != 0) {
                  param_2[2] = uVar7 | 0x40;
                }
                *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x78);
                if (*(longlong *)(param_2 + 0x78) == 0) {
                  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x76);
                }
                uVar2 = (param_2[0x62] & 0xffff) * 0xc;
                uVar7 = (int)(short)param_2[0x67] - (int)(short)param_2[0x65];
                if ((int)uVar7 <= (int)(short)((ulonglong)uVar2 * 0x1999999a >> 0x20)) {
                  uVar7 = uVar2 / 10;
                }
                *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
                param_2[10] = 0;
                param_2[0xc] = 0;
                param_2[0xd] = 0;
                *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(param_2 + 100);
                *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x66);
                *(short *)(param_2 + 0x1a) = (short)param_2[0x62];
                *(short *)((longlong)param_2 + 0x6a) = (short)param_2[0x67];
                *(short *)(param_2 + 0x1b) = (short)param_2[0x65];
                *(short *)((longlong)param_2 + 0x6e) = (short)uVar7;
                if (uVar1 != 0) {
                  puVar6 = (undefined2 *)
                           FUN_14001f231(*(longlong *)(param_2 + 0x26),0x10,0,uVar1,0,&local_34);
                  *(undefined2 **)(param_2 + 0xc) = puVar6;
                  iVar3 = local_34;
                  if (local_34 != 0) goto LAB_14005576c;
                  piVar10 = (int *)(*(longlong *)(param_2 + 0x7e) + 4);
                  uVar8 = uVar1;
                  do {
                    *puVar6 = (short)*piVar10;
                    puVar6[1] = (short)piVar10[-1];
                    *(int *)(puVar6 + 2) = *piVar10 << 6;
                    *(int *)(puVar6 + 4) = piVar10[-1] << 6;
                    *(int *)(puVar6 + 6) = *piVar10 << 6;
                    puVar6 = puVar6 + 8;
                    piVar10 = piVar10 + 10;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                  param_2[10] = uVar1;
                  uVar8 = param_2[0x68];
                }
                if ((uVar8 & 4) == 0) {
                  uVar7 = (uint)(ushort)param_2[0x69];
                }
                else {
                  uVar8 = param_2[0x86];
                  uVar7 = 0;
                  if (uVar8 != 0) {
                    puVar9 = (uint *)(*(longlong *)(param_2 + 0x8a) + 4);
                    do {
                      uVar1 = *puVar9;
                      if ((int)*puVar9 < (int)uVar7) {
                        uVar1 = uVar7;
                      }
                      uVar7 = uVar1;
                      puVar9 = puVar9 + 4;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                }
                *(short *)(param_2 + 0x1c) = (short)uVar7;
                *(undefined2 *)((longlong)param_2 + 0x72) =
                     *(undefined2 *)((longlong)param_2 + 0x6e);
                *(ushort *)(param_2 + 0x1d) = -((ushort)param_2[0x1a] / 10);
                *(ushort *)((longlong)param_2 + 0x76) = (ushort)param_2[0x1a] / 0x1e;
                local_40 = 0x10003756e6963;
                local_48 = param_2;
                iVar3 = FUN_14001f301((uint *)&DAT_1400f80e0,0,(longlong *)&local_48,
                                      (undefined8 *)0x0);
                if (param_2[0x8c] != 0) {
                  *(byte *)(param_2 + 2) = (byte)param_2[2] | 0x40;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14005576c:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStackY_78);
  }
  return iVar3;
}

