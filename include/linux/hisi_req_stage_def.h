
ADDITEM(REQ_PROC_STAGE_INIT_FROM_BIO, "REQ_INIT", hisi_blk_latency_req_init_func),
ADDITEM(REQ_PROC_STAGE_START, "REQ_RQ_START", hisi_blk_latency_req_start_func),
ADDITEM(REQ_PROC_STAGE_MQ_ADDTO_PLUGLIST, "REQ_MQ_ADDTO_PLUGLIST", NULL),
ADDITEM(REQ_PROC_STAGE_MQ_FLUSH_PLUGLIST, "REQ_MQ_FLUSH_PLUGLIST", NULL),
ADDITEM(REQ_PROC_STAGE_MQ_ADDTO_SYNC_LIST, "REQ_MQ_ADDTO_SYNC_LIST", NULL),
ADDITEM(REQ_PROC_STAGE_MQ_ADDTO_ASYNC_LIST, "REQ_MQ_ADDTO_ASYNC_LIST", NULL),
ADDITEM(REQ_PROC_STAGE_MQ_QUEUE_RQ, "REQ_MQ_QUEUE_RQ", NULL),
ADDITEM(REQ_PROC_STAGE_SQ_REQUEUE, "REQ_SQ_REQUEUE", NULL),
ADDITEM(REQ_PROC_STAGE_DONE_SFTIRQ, "REQ_SCSI_SFT_IRQ_DONE", NULL),
ADDITEM(REQ_PROC_STAGE_UPDATE, "REQ_RQ_UPDATE", hisi_blk_latency_req_update_func),
ADDITEM(REQ_PROC_STAGE_FREE, "REQ_RQ_FREE",	hisi_blk_latency_req_free_func),

