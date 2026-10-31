/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017dff0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14017dff0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_4138 [32];
  undefined8 local_4118;
  int *local_4110;
  int local_4108 [4096];
  int local_108 [6];
  int *local_f0;
  int *local_e8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  longlong local_58;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_4138;
  if (param_1 == (undefined8 *)0x0) {
    iVar7 = 0x60;
  }
  else {
    puVar4 = (ushort *)param_2[1];
    iVar7 = 0x14;
    if (puVar4 != (ushort *)0x0) {
      if ((puVar4[1] != 0) && (*puVar4 != 0)) {
        if ((*(longlong *)(puVar4 + 0xc) == 0) ||
           (((*(longlong *)(puVar4 + 4) == 0 ||
             (*(ushort *)(*(longlong *)(puVar4 + 0xc) + (ulonglong)(*puVar4 - 1) * 2) + 1 !=
              (uint)puVar4[1])) || (iVar7 = 0x13, (*(byte *)(param_2 + 2) & 3) != 0))))
        goto LAB_14017e1a7;
        piVar5 = (int *)*param_2;
        iVar7 = 6;
        if (piVar5 == (int *)0x0) goto LAB_14017e1a7;
        iVar2 = piVar5[1];
        if (iVar2 != 0) {
          iVar3 = *piVar5;
          iVar7 = 0;
          if (iVar3 != 0) {
            iVar7 = 6;
            if (*(longlong *)(piVar5 + 4) != 0) {
              local_70 = *(undefined8 *)(puVar4 + 0x10);
              local_90 = *(undefined4 *)puVar4;
              uStack_8c = *(undefined4 *)(puVar4 + 2);
              uStack_88 = *(undefined4 *)(puVar4 + 4);
              uStack_84 = *(undefined4 *)(puVar4 + 6);
              local_80 = *(undefined4 *)(puVar4 + 8);
              uStack_7c = *(undefined4 *)(puVar4 + 10);
              uStack_78 = *(undefined4 *)(puVar4 + 0xc);
              uStack_74 = *(undefined4 *)(puVar4 + 0xe);
              local_68 = iVar3 + -1;
              local_64 = iVar2 + -1;
              local_60 = piVar5[2];
              iVar7 = 0;
              if (0 < local_60) {
                iVar7 = local_68 * local_60;
              }
              local_58 = *(longlong *)(piVar5 + 4) + (longlong)iVar7;
              uVar1 = (iVar2 + iVar3 + -2) * 8 + 800;
              if (uVar1 < 0x1001) {
                local_f0 = local_4108;
                local_e8 = local_108;
                iVar7 = FUN_14017e420();
              }
              else {
                uVar6 = *param_1;
                local_4110 = local_4108;
                local_4118 = 0;
                local_f0 = (int *)FUN_14012b8aa(uVar6,4,0,uVar1);
                iVar7 = local_4108[0];
                if (local_4108[0] == 0) {
                  local_e8 = local_f0 + uVar1;
                  iVar7 = FUN_14017e420(local_108);
                  FUN_140128b39(uVar6,local_f0);
                }
              }
            }
          }
          goto LAB_14017e1a7;
        }
      }
      iVar7 = 0;
    }
  }
LAB_14017e1a7:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_4138)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_4138);
}

