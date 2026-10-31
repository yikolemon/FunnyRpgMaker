/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802080ce */

int FUN_1802080ce(undefined8 param_1,int *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int *piVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int *local_48;
  undefined8 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar3 = FUN_180208b58(param_2 + 0x36,param_1);
  iVar4 = 2;
  if (((iVar3 == 0) && (cVar2 = FUN_180208b9a(param_2 + 0x36), cVar2 != '\0')) &&
     (iVar4 = FUN_180208bbc(param_1,param_2[0x3b],&local_48), iVar4 == 0)) {
    *param_2 = (int)local_48;
    if ((int)param_3 < 0) {
      iVar4 = 0;
    }
    else {
      param_3 = param_3 & 0xffff;
      iVar4 = 6;
      if ((int)param_3 < (int)local_48) {
        local_58 = CONCAT71(local_58._1_7_,param_2[0x48] != 0);
        iVar4 = FUN_180208c72(param_2 + 0x51,param_1,param_3,param_2[0x3b]);
        if ((iVar4 == 0) &&
           (local_34 = FUN_180208fc2(param_2 + 0x5e,param_1,param_2[0x5c],param_2[0x5b]),
           iVar4 = local_34, local_34 == 0)) {
          param_2[1] = param_3;
          uVar8 = (ulonglong)(uint)param_2[0x86];
          uVar5 = param_2[2];
          uVar7 = uVar5 | 1;
          param_2[4] = param_2[0x86] + 1;
          param_2[2] = uVar7;
          if (uVar8 != 0) {
            piVar10 = (int *)(*(longlong *)(param_2 + 0x8a) + 0xc);
            do {
              if (*piVar10 != 0) {
                if ((int)uVar8 != 0) goto LAB_18020821b;
                break;
              }
              piVar10 = piVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (param_2[0x7c] == 0) {
            iVar4 = 3;
          }
          else {
            uVar7 = uVar5 & 0xfffffffe;
LAB_18020821b:
            uVar5 = param_2[0x68];
            iVar3 = param_2[0x7c];
            uVar7 = (uVar5 & 1) * 0x10 + 0x10 | ~uVar5 & 4 | uVar7;
            param_2[2] = uVar7;
            if (iVar3 != 0) {
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
            uVar1 = (param_2[0x62] & 0xffffU) * 0xc;
            uVar7 = (int)(short)param_2[0x67] - (int)(short)param_2[0x65];
            if ((int)uVar7 <= (int)(short)((ulonglong)uVar1 * 0x1999999a >> 0x20)) {
              uVar7 = uVar1 / 10;
            }
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
            param_2[10] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0x16] = param_2[100];
            param_2[0x17] = param_2[0x65];
            param_2[0x18] = param_2[0x66];
            param_2[0x19] = param_2[0x67];
            *(short *)(param_2 + 0x1a) = (short)param_2[0x62];
            *(short *)((longlong)param_2 + 0x6a) = (short)param_2[0x67];
            *(short *)(param_2 + 0x1b) = (short)param_2[0x65];
            *(short *)((longlong)param_2 + 0x6e) = (short)uVar7;
            if (iVar3 != 0) {
              local_50 = &local_34;
              local_58 = 0;
              puVar6 = (undefined2 *)FUN_1801cc8d6(*(undefined8 *)(param_2 + 0x26),0x10,0,iVar3);
              *(undefined2 **)(param_2 + 0xc) = puVar6;
              iVar4 = local_34;
              if (local_34 != 0) goto LAB_180208130;
              piVar10 = (int *)(*(longlong *)(param_2 + 0x7e) + 4);
              iVar4 = iVar3;
              do {
                *puVar6 = (short)*piVar10;
                puVar6[1] = (short)piVar10[-1];
                *(int *)(puVar6 + 2) = *piVar10 << 6;
                *(int *)(puVar6 + 4) = piVar10[-1] << 6;
                *(int *)(puVar6 + 6) = *piVar10 << 6;
                puVar6 = puVar6 + 8;
                piVar10 = piVar10 + 10;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              param_2[10] = iVar3;
              uVar5 = param_2[0x68];
            }
            if ((uVar5 & 4) == 0) {
              uVar5 = (uint)*(ushort *)(param_2 + 0x69);
            }
            else {
              iVar4 = param_2[0x86];
              uVar5 = 0;
              if (iVar4 != 0) {
                puVar9 = (uint *)(*(longlong *)(param_2 + 0x8a) + 4);
                do {
                  uVar7 = *puVar9;
                  if ((int)*puVar9 < (int)uVar5) {
                    uVar7 = uVar5;
                  }
                  uVar5 = uVar7;
                  puVar9 = puVar9 + 4;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
            *(short *)(param_2 + 0x1c) = (short)uVar5;
            *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
            *(ushort *)(param_2 + 0x1d) = -(*(ushort *)(param_2 + 0x1a) / 10);
            *(ushort *)((longlong)param_2 + 0x76) = *(ushort *)(param_2 + 0x1a) / 0x1e;
            local_40 = 0x10003756e6963;
            local_48 = param_2;
            iVar4 = FUN_1801cc9a6(&DAT_18033afb0,0,&local_48,0);
            if (param_2[0x8c] != 0) {
              *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 0x40;
            }
          }
        }
      }
    }
  }
LAB_180208130:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
  }
  return iVar4;
}

