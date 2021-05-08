/*** defines ***/

#define HT_PRIME_1  151
#define HT_PRIME_2  163

#define HT_INITIAL_BASE_SIZE    50


/*** data ***/

typedef struct {
    char *key;
    char *value;
} ht_item;

typedef struct {
    int base_size;
    int size;
    int count;          /* how full hash table is */
    ht_item** items;    /* array of pointers to items */
} ht_hash_table;


/*** prototypes ***/

static ht_item *ht_new_item(const char *k, const char *v);

ht_hash_table *ht_new();

static void ht_del_item(ht_item *i);

void ht_del_hash_table(ht_hash_table *ht);

static int ht_hash(const char *s, const int a, const int m);

static int ht_get_hash(const char *s, const int num_buckets, const int attempt);

void ht_insert(ht_hash_table *ht, const char *key, const char *value);

char *ht_search(ht_hash_table *ht, const char *key);

void ht_delete(ht_hash_table *ht, const char *key);

static ht_hash_table *ht_new_sized(const int base_size);

static void ht_resize(ht_hash_table *ht, const int base_size);

static void ht_resize_up(ht_hash_table *ht);

static void ht_resize_down(ht_hash_table *ht);
