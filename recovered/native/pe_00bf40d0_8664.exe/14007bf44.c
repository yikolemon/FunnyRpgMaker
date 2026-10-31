/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007bf44 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14007bf44(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStackY_4138 [32];
  int local_4108 [4096];
  byte local_108 [24];
  int *local_f0;
  byte *local_e8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  longlong local_58;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_4138;
  if (param_1 == (longlong *)0x0) {
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
        goto LAB_14007c0fb;
        piVar5 = (int *)*param_2;
        iVar7 = 6;
        if (piVar5 == (int *)0x0) goto LAB_14007c0fb;
        iVar2 = piVar5[1];
        if (iVar2 != 0) {
          iVar3 = *piVar5;
          iVar7 = 0;
          if (iVar3 != 0) {
            iVar7 = 6;
            if (*(longlong *)(piVar5 + 4) != 0) {
              local_70 = *(undefined8 *)(puVar4 + 0x10);
              local_90 = *(undefined8 *)puVar4;
              uStack_88 = *(undefined8 *)(puVar4 + 4);
              local_80 = *(undefined8 *)(puVar4 + 8);
              uStack_78 = *(undefined8 *)(puVar4 + 0xc);
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
                iVar7 = FUN_14007c374(local_108);
              }
              else {
                lVar6 = *param_1;
                local_f0 = (int *)FUN_14001f231(lVar6,4,0,uVar1,0,local_4108);
                iVar7 = local_4108[0];
                if (local_4108[0] == 0) {
                  local_e8 = (byte *)(local_f0 + uVar1);
                  iVar7 = FUN_14007c374(local_108);
                  FUN_14001c53d(lVar6,(longlong)local_f0);
                }
              }
            }
          }
          goto LAB_14007c0fb;
        }
      }
      iVar7 = 0;
    }
  }
LAB_14007c0fb:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_4138)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_4138);
}

