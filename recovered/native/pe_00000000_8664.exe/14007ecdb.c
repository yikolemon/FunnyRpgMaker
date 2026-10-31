/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007ecdb */

void FUN_14007ecdb(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x15b0);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + lVar6);
      if ((*(byte *)(lVar2 + 0x15) & 1) == 0) {
        lVar4 = FUN_140096dff(lVar2);
        if (lVar4 == 0) {
          lVar4 = FUN_140096c98(*(undefined8 *)(lVar2 + 8));
          *(int *)(lVar2 + 0x31c) = (int)lVar4 - *(int *)(param_1 + 0x29a0);
        }
        *(uint *)(lVar4 + 4) =
             (int)(*(float *)(lVar2 + 0x60) - *(float *)(lVar2 + 0x54)) & 0xffffU |
             (int)(*(float *)(lVar2 + 100) - *(float *)(lVar2 + 0x58)) << 0x10;
        *(uint *)(lVar4 + 8) =
             (int)*(float *)(lVar2 + 0x70) & 0xffffU | (int)*(float *)(lVar2 + 0x74) << 0x10;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar2 + 0x50);
        *(uint *)(lVar4 + 0xc) =
             (int)*(float *)(lVar2 + 0x54) & 0xffffU | (int)*(float *)(lVar2 + 0x58) << 0x10;
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar2 + 0x4d0);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar2 + 0x20);
        *(undefined2 *)(lVar4 + 0x1c) = *(undefined2 *)(lVar2 + 0x496);
        *(undefined1 *)(lVar4 + 0x1e) = *(undefined1 *)(lVar2 + 0x10c);
        *(bool *)(lVar4 + 0x1f) = *(longlong *)(lVar2 + 0x418) != lVar2;
        *(undefined1 *)(lVar4 + 0x21) = 0;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_1400a826e(param_3,*param_3 + -1 + (uint)(*param_3 == 0) + *(int *)(param_1 + 0x2998) * 6);
  lVar5 = *(longlong *)(param_1 + 0x29a0);
  if (lVar5 != 0) {
    lVar6 = lVar5 + 4;
    do {
      if (*(char *)(lVar6 + 0x21) == '\0') {
        FUN_1400793b6(param_3,"[%s][%s]\n",*param_2,lVar6 + 0x24);
        if (*(char *)(lVar6 + 0x1f) == '\x01') {
          FUN_1400793b6(param_3,"IsChild=1\n");
          FUN_1400793b6(param_3,"Size=%d,%d\n",(int)*(short *)(lVar6 + 8),
                        (int)*(short *)(lVar6 + 10));
        }
        else {
          if ((*(int *)(lVar6 + 0x10) != 0) && (*(int *)(lVar6 + 0x10) != 0x11111111)) {
            FUN_1400793b6(param_3,"ViewportPos=%d,%d\n",(int)*(short *)(lVar6 + 0xc),
                          (int)*(short *)(lVar6 + 0xe));
            FUN_1400793b6(param_3,"ViewportId=0x%08X\n",*(undefined4 *)(lVar6 + 0x10));
          }
          sVar3 = *(short *)(lVar6 + 6);
          if (sVar3 == 0 && *(short *)(lVar6 + 4) == 0) {
            if (*(int *)(lVar6 + 0x10) == 0x11111111) {
              sVar3 = 0;
              goto LAB_14007eedd;
            }
          }
          else {
LAB_14007eedd:
            FUN_1400793b6(param_3,"Pos=%d,%d\n",(int)*(short *)(lVar6 + 4),(int)sVar3);
          }
          if (*(short *)(lVar6 + 8) != 0 || *(short *)(lVar6 + 10) != 0) {
            FUN_1400793b6(param_3,"Size=%d,%d\n",(int)*(short *)(lVar6 + 8),
                          (int)*(short *)(lVar6 + 10));
          }
          FUN_1400793b6(param_3,"Collapsed=%d\n",*(undefined1 *)(lVar6 + 0x1e));
          if (*(int *)(lVar6 + 0x14) != 0) {
            if (*(short *)(lVar6 + 0x1c) == -1) {
              FUN_1400793b6(param_3,"DockId=0x%08X\n");
            }
            else {
              FUN_1400793b6(param_3,"DockId=0x%08X,%d\n");
            }
            if (*(int *)(lVar6 + 0x18) != 0) {
              FUN_1400793b6(param_3,"ClassId=0x%08X\n");
            }
          }
        }
        FUN_1400792d0(param_3,"\n",0);
        lVar5 = *(longlong *)(param_1 + 0x29a0);
      }
      lVar6 = lVar6 + *(int *)(lVar6 + -4);
    } while (lVar6 != *(int *)(param_1 + 0x2998) + lVar5 + 4);
  }
  return;
}

