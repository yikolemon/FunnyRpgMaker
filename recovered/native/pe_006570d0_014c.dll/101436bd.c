/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101436bd */

void FUN_101436bd(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined4 *local_28;
  undefined4 local_24;
  float local_20;
  longlong local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  puVar1 = *(undefined4 **)(param_1 + 4);
  FUN_1012d08c("ID: 0x%08X, ActiveID: 0x%08X",*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(DAT_1039d74c + 0x1528));
  FUN_10124092();
  puVar5 = &DAT_10356101;
  if (((*(byte *)(param_1 + 0xb) & 1) != 0) &&
     (puVar5 = &DAT_103495b9, *(char *)(param_1 + 0x5a) == '\0')) {
    puVar5 = &DAT_103495f1;
  }
  FUN_1012d08c("TextLen: %d, Cursor: %d%s, Selection: %d..%d",*(undefined4 *)(param_1 + 0x10),
               *puVar1,puVar5,puVar1[1],puVar1[2]);
  FUN_1012d08c("BufCapacity: %d, LineCount: %d",*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x48));
  FUN_1012d08c("(Internal Buffer: TextA Size: %d, Capacity: %d)",*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  FUN_1012d08c("has_preferred_x: %d (%.2f)",*(undefined1 *)((int)puVar1 + 0x16),
               (double)(float)puVar1[7]);
  FUN_1012d08c("undo_point: %d, redo_point: %d, undo_char_point: %d, redo_char_point: %d",
               (int)*(short *)(puVar1 + 0x28e),(int)*(short *)((int)puVar1 + 0xa3a),puVar1[0x28f],
               puVar1[0x290]);
  fVar9 = (float10)FUN_10111f20();
  local_20 = (float)fVar9;
  local_1c = (ulonglong)(uint)(local_20 * DAT_102b710c) << 0x20;
  cVar3 = FUN_1010c081("undopoints",&local_1c,9,0);
  if (cVar3 != '\0') {
    local_1c = 0;
    FUN_100fd3bc(0xe,&local_1c);
    local_28 = puVar1 + 0x194;
    piVar7 = puVar1 + 0xb;
    iVar8 = 0;
    do {
      uVar4 = 0x75;
      if ((iVar8 < *(short *)(puVar1 + 0x28e)) ||
         (uVar4 = 0x72, *(short *)((int)puVar1 + 0xa3a) <= iVar8)) {
        iVar2 = *piVar7;
        iVar6 = piVar7[-2];
        if (iVar2 == -1) {
          iVar6 = 0;
        }
        local_24 = uVar4;
        FUN_1012d08c("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%.*s\"",
                     uVar4,iVar8,piVar7[-3],piVar7[-2],piVar7[-1],iVar2,iVar6,(int)local_28 + iVar2)
        ;
      }
      else {
        FUN_10111871();
        FUN_1012d08c("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%.*s\"",
                     0x20,iVar8,piVar7[-3],piVar7[-2],piVar7[-1],*piVar7,0,(int)local_28 + *piVar7);
        FUN_10111961();
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar8 != 99);
    FUN_100fd4c4();
  }
  FUN_1010c644();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

